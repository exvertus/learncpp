// Benchmark program to compare the performance of '\n' vs std::endl
// when writing a large number of lines to both the console and a file.
//
// '\n' inserts a newline without forcing a flush, while std::endl inserts
// a newline and immediately flushes the output buffer. Flushing can be
// expensive, especially in file output or tight loops, so this program
// measures and reports the time taken for each method in both contexts.
//
// Results are printed to std::cerr to keep them separate from the output
// being timed.
#include <iostream>
#include <fstream>
#include <chrono>
#include <utility>
#include <cstdint>

using namespace std::chrono;

struct Timings { int64_t nl_ms; int64_t endl_ms; };

Timings benchmark_stream(std::ostream& os, int iterations) {
	auto start = high_resolution_clock::now();
	for (int i = 0; i < iterations; ++i)
	{
		os << "Test" << '\n';
	}
	auto mid = high_resolution_clock::now();
	for (int i = 0; i < iterations; ++i)
	{
		os << "Test" << std::endl;
	}
	auto end = high_resolution_clock::now();

	return {
		duration_cast<milliseconds>(mid - start).count(),
		duration_cast<milliseconds>(end - mid).count()
	};
}

int main()
{
	constexpr int NUM_ITERATIONS{ 1'000'000 };

	std::cerr << "Console test:\n";
	auto console_timings = benchmark_stream(std::cout, NUM_ITERATIONS);
	std::cerr << "\\n took: " << console_timings.nl_ms << " ms\n";
	std::cerr << "endl took: " << console_timings.endl_ms << " ms\n";

	std::ofstream outfile("out/endl.txt");
	std::cerr << "File text:\n";
	auto file_timings = benchmark_stream(outfile, NUM_ITERATIONS);
	std::cerr << "\\n took: " << file_timings.nl_ms << " ms\n";
	std::cerr << "endl took: " << file_timings.endl_ms << " ms\n";
}