#pragma once
#include <vector>
#include <unordered_map>
#include <string>

//文件读取格式：-----------------
//#$LINE_EKI_START$#
//a线 a站
//a线 b站
//b线 c站
//......
//#$LINE_EKI_END$#
//#$EKI_START$#
//a站 D:\xxx\xxx.mp3
//b站 D:\xxx\xxx.mp3
//...
//#$EKI_END$#
//文件读取格式END：---------------

class eki final
{
private:
    std::unordered_map<std::wstring, std::vector<std::wstring>> line_eki;  // 键：线路 值：站点
    std::unordered_map<std::wstring, std::wstring> eki_sound;  // 键：站点 值：音乐资源文件
    bool play_sound(const std::wstring path);  // 播放声音-通过路径

public:
    eki(const std::wstring data_path);  // 根据资源文件创建
    ~eki();
    std::vector<std::wstring> get_lines();  // 获取所有线路
    std::vector<std::wstring> get_line_eki(const std::wstring line);  // 获取一条线路的所有站点,没有则返回空的vector
    std::vector<std::wstring> get_all_eki();  // 获取所有站点,没有则返回空的vector
    std::wstring get_sound(const std::wstring eki);  // 获取某个站点对应的声音路径
    bool play_eki_sound(const std::wstring eki);  // 播放声音-通过站点
   
};

