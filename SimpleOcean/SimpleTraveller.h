#ifndef SIMPLETRAVELLER_H
	#define SIMPLETRAVELLER_H


#include <osg/LineSegment>

#include<osgGA/CameraManipulator>

#include <osgUtil/IntersectVisitor>

#include<osgViewer/Viewer>

class SimpleTraveller : public osgGA::CameraManipulator
{
public:
	
	SimpleTraveller();
	~SimpleTraveller();

	virtual void setByMatrix(const osg::Matrixd& matrix);
	virtual osg::Matrixd getMatrix() const;

	virtual void setByInverseMatrix(const osg::Matrixd& matrix);
	virtual osg::Matrixd getInverseMatrix() const; 

	virtual bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& us);

	bool changePosition(osg::Vec3 delta);

	void setPosition(osg::Vec3 &position);

	void setStep(int delta_step);

	void setMnode(osg::Node *Node);

private:
	
	osg::Vec3 m_vPosition;

	osg::Vec3 m_vRotation;

	int m_vStep;

	float m_vRotateStep;

	int m_iLeftX;
	
	int m_iLeftY;

	bool m_bLeftDown;

	osg::Node *m_node;
};

#endif