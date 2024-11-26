#pragma once
#include <vector>
#include <unordered_map>
#include <string>

//�ļ���ȡ��ʽ��-----------------
//#$LINE_EKI_START$#
//a�� aվ
//a�� bվ
//b�� cվ
//......
//#$LINE_EKI_END$#
//#$EKI_START$#
//aվ D:\xxx\xxx.mp3
//bվ D:\xxx\xxx.mp3
//...
//#$EKI_END$#
//�ļ���ȡ��ʽEND��---------------

class eki final
{
private:
    std::unordered_map<std::wstring, std::vector<std::wstring>> line_eki;  // ������· ֵ��վ��
    std::unordered_map<std::wstring, std::wstring> eki_sound;  // ����վ�� ֵ��������Դ�ļ�
    bool play_sound(const std::wstring path);  // ��������-ͨ��·��

public:
    eki(const std::wstring data_path);  // ������Դ�ļ�����
    ~eki();
    std::vector<std::wstring> get_lines();  // ��ȡ������·
    std::vector<std::wstring> get_line_eki(const std::wstring line);  // ��ȡһ����·������վ��,û���򷵻ؿյ�vector
    std::vector<std::wstring> get_all_eki();  // ��ȡ����վ��,û���򷵻ؿյ�vector
    std::wstring get_sound(const std::wstring eki);  // ��ȡĳ��վ���Ӧ������·��
    bool play_eki_sound(const std::wstring eki);  // ��������-ͨ��վ��
   
};

