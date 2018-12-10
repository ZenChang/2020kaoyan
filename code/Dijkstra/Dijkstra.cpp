#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

struct MapInfo
{
  MapInfo(int from_no, int to_no, double distance):from_no(from_no), to_no(to_no), distance(distance){}
  int from_no = 0;
  int to_no = 0;
  double distance = 0.0;
};

void InputMapInfo(std::vector<MapInfo>& vec_map_info)
{
  int from_no = 0;
  int to_no = 0;
  double distance = 0.0;
  while (std::cin >> from_no >> to_no >> distance && from_no && to_no && distance)
  {
    vec_map_info.push_back(MapInfo(from_no, to_no, distance));
  }
}

void OutputMapInfo(std::vector<MapInfo>& vec_map_info)
{
  for(auto elem : vec_map_info)
  {
    std::cout << "[" << elem.from_no << "," << elem.to_no << "," << elem.distance << "]" << std::endl;
  }
}

void OutputShortestDistance(int from_no, std::vector<MapInfo>& vec_map_info)
{
  for (auto elem : vec_map_info)
  {

  }
}

void OutputShortestDistances(std::vector<MapInfo>& vec_map_info)
{
  for (int i = 0; i < 1; ++i)
  {
    OutputShortestDistance(1, vec_map_info);
  }
}

int main()
{
  std::vector<MapInfo> vec_map_info;
  InputMapInfo(vec_map_info);
  OutputMapInfo(vec_map_info);
  OutputShortestDistances(vec_map_info);

  return 0;
}
