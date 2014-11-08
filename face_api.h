
#pragma once 
#ifndef __FACE_API_360_H__
#define __FACE_API_360_H__
  

#ifdef DLL_IMPLEMENT  
#define DLL_API __declspec(dllexport)  
#else  
#define DLL_API __declspec(dllimport)  
#endif  
  

#include <vector>
#include "face_common.h"
using namespace std;

namespace face_360
{

class FaceAPI{
public:
	FaceAPI();
	~FaceAPI();

	// ��ʼ������ģ�͵�·����ֻ�����һ��
	Face360Error init(const char *model_dir);

	// ����ͼ��ÿ�μ����ͼ���ʱ���ȵ���һ��
	Face360Error set_image(const char *img_data, int width, int height, int width_step);

	// ������ⲿ��
	FaceDetectParam get_face_detect_param();
	Face360Error set_face_detect_param(FaceDetectParam param);
	Face360Error detect(vector<FaceRect> &rect_vec);
	
	// �������Բ���
	Face360Error get_pose(FaceRect rect, FacePose &pose);
	Face360Error get_gender(FaceRect rect, FaceGender &gender);
	//bool get_glass(FaceRect rect, FaceGlass &glass);
	//bool get_smile(FaceRect rect, FaceSmile &smile);
	Face360Error get_face_points(FaceRect rect, FacePose pose, FacePoints &points);

	// ������������

private:
	void *impl_;
};


}
#endif
