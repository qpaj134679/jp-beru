#include "eki.h"

// ������Դ�ļ�����
eki::eki(const std::wstring data_path) {

}

eki::~eki() {}

// ��ȡ������·
std::vector<std::wstring> eki::get_lines() {

}
   
// ��ȡһ����·������վ��,û���򷵻ؿյ�vector
std::vector<std::wstring> eki::get_line_eki(const std::wstring line) {

}

// ��ȡ����վ��,û���򷵻ؿյ�vector
std::vector<std::wstring> eki::get_all_eki() {


}

// ��ȡĳ��վ���Ӧ������·��
std::wstring eki::get_sound(const std::wstring eki) {

}

// ��������-ͨ��վ��
bool eki::play_eki_sound(const std::wstring eki) {
	auto it = eki_sound.find(eki);
	if (it == eki_sound.end())
		return false;
	else
		return play_sound(it->second);
}

// ��������-ͨ��·��
bool eki::play_sound(const std::wstring path) {

}