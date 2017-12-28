#ifndef CDEMOCLASS_H
#define CDEMOCLASS_H

#include <iostream>
#include <string>

// ------------QT5------------
#include <QFileDialog>
#include <QTextCodec>
#include <QMessageBox>
#include <QWidget>
// ------------OpenCV------------
#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>  
// ------------VTK------------
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"
// ------------ITK------------
#include "itkImage.h"
#include "itkImageFileReader.h"
// ------------GDCM------------
#include "gdcmCoder.h"
#include "gdcmDecoder.h"
// ------------Boost------------
#include "boost/lambda/lambda.hpp"
// ------------OpenMP------------
#include <omp.h>

///-------MPI/MKL/CUDA/DL Models-------ETC
  
class CDemoClass /*:  public QWidget*/
{
	//Q_OBJECT
public:
	explicit CDemoClass(/*QWidget *parent = nullptr*/);
	virtual ~CDemoClass();

protected:

	
signals:

	
protected slots:
	

private:
	

};
#endif
