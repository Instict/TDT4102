#pragma once
#include "Graph.h"
#include "GUI.h"

#ifndef WIN32
#include "Graph_lib.h"
#endif

using namespace Graph_lib;

class Emoji{
public:
	Emoji(const Emoji&) = delete;
	Emoji& operator=(const Emoji&) = delete;
	Emoji() {}
	virtual void attach_to(Graph_lib::Window&) = 0;
	virtual ~Emoji() {}
};


class Face : public Emoji {
private:
	Circle faceEmoji; 
public:
	Face(Point center, int radius);
	virtual void attach_to(Graph_lib::Window&) = 0;
	virtual ~Face(){}
};

class EmptyFace : public Face {
private: 
	Circle rightEye, leftEye;
public:
	EmptyFace(Point c, int r);
	void attach_to(Graph_lib::Window&) override;
};

class SmileyFace : public EmptyFace {
private:
	Arc mouth;
public:
	SmileyFace(Point c, int r);
	void attach_to(Graph_lib::Window&) override;
};

class SadFace : public EmptyFace {
private:
	Arc mouth;
public:
	SadFace(Point c, int r);
	void attach_to(Graph_lib::Window&) override;
};

class AngryFace : public SadFace {
private:
	Line rightBrow, leftBrow;
public:
	AngryFace(Point c, int r);
	void attach_to(Graph_lib::Window&) override;
};

class GrinFace : public EmptyFace {
private:
	Rectangle mouth;
public:
	GrinFace(Point c, int r);
	void attach_to(Graph_lib::Window&) override;
};

class WinkeyFace : public SmileyFace {
private:
	Circle yellowRightEye;
	Arc rightEye;
public:
	WinkeyFace(Point c, int r);
	void attach_to(Graph_lib::Window&) override;
};