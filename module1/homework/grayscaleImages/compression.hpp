#pragma once

#include <array>
#include <utility>
#include <vector>

constexpr uint8_t width = 32; //240
constexpr uint8_t height = 32;  //160

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& img);
std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& compressedImg);

void printMap(const std::array<std::array<uint8_t, width>, height> &);
