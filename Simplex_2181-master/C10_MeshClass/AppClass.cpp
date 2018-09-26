#include "AppClass.h"
void Application::InitVariables(void)
{
	//Make MyMesh object
	m_pMesh = new MyMesh[46];
	
	for (int i = 0; i < 46; i++) {
		m_pMesh[i] = *(new MyMesh());
		m_pMesh[i].GenerateCube(1.0f, C_BLACK);
	}
}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	static float xMod = 0;
	static float yMod = 0;

	xMod += 0.1;
	yMod = cos(xMod);

	matrix4 m4View = m_pCameraMngr->GetViewMatrix();
	matrix4 m4Projection = m_pCameraMngr->GetProjectionMatrix();

	m_pMesh[0].Render(m4Projection, m4View, TranslateMatrix(-3,4,xMod,yMod));
	m_pMesh[1].Render(m4Projection, m4View, TranslateMatrix(3, 4, xMod, yMod));
	m_pMesh[2].Render(m4Projection, m4View, TranslateMatrix(-2, 3, xMod, yMod));
	m_pMesh[3].Render(m4Projection, m4View, TranslateMatrix(2, 3, xMod, yMod));
	m_pMesh[4].Render(m4Projection, m4View, TranslateMatrix(-3, 2, xMod, yMod));
	m_pMesh[5].Render(m4Projection, m4View, TranslateMatrix(-2, 2, xMod, yMod));
	m_pMesh[6].Render(m4Projection, m4View, TranslateMatrix(-1, 2, xMod, yMod));
	m_pMesh[7].Render(m4Projection, m4View, TranslateMatrix(0, 2, xMod, yMod));
	m_pMesh[8].Render(m4Projection, m4View, TranslateMatrix(1, 2, xMod, yMod));
	m_pMesh[9].Render(m4Projection, m4View, TranslateMatrix(2, 2, xMod, yMod));
	m_pMesh[10].Render(m4Projection, m4View, TranslateMatrix(3, 2, xMod, yMod));
	m_pMesh[11].Render(m4Projection, m4View, TranslateMatrix(-4, 1, xMod, yMod));
	m_pMesh[12].Render(m4Projection, m4View, TranslateMatrix(-3, 1, xMod, yMod));
	m_pMesh[13].Render(m4Projection, m4View, TranslateMatrix(-1, 1, xMod, yMod));
	m_pMesh[14].Render(m4Projection, m4View, TranslateMatrix(0, 1, xMod, yMod));
	m_pMesh[15].Render(m4Projection, m4View, TranslateMatrix(1, 1, xMod, yMod));
	m_pMesh[16].Render(m4Projection, m4View, TranslateMatrix(3, 1, xMod, yMod));
	m_pMesh[17].Render(m4Projection, m4View, TranslateMatrix(4, 1, xMod, yMod));
	m_pMesh[18].Render(m4Projection, m4View, TranslateMatrix(-5, 0, xMod, yMod));
	m_pMesh[19].Render(m4Projection, m4View, TranslateMatrix(-4, 0, xMod, yMod));
	m_pMesh[20].Render(m4Projection, m4View, TranslateMatrix(-3, 0, xMod, yMod));
	m_pMesh[21].Render(m4Projection, m4View, TranslateMatrix(-2, 0, xMod, yMod));
	m_pMesh[22].Render(m4Projection, m4View, TranslateMatrix(-1, 0, xMod, yMod));
	m_pMesh[23].Render(m4Projection, m4View, TranslateMatrix(0, 0, xMod, yMod));
	m_pMesh[24].Render(m4Projection, m4View, TranslateMatrix(1, 0, xMod, yMod));
	m_pMesh[25].Render(m4Projection, m4View, TranslateMatrix(2, 0, xMod, yMod));
	m_pMesh[26].Render(m4Projection, m4View, TranslateMatrix(3, 0, xMod, yMod));
	m_pMesh[27].Render(m4Projection, m4View, TranslateMatrix(4, 0, xMod, yMod));
	m_pMesh[28].Render(m4Projection, m4View, TranslateMatrix(5, 0, xMod, yMod));
	m_pMesh[29].Render(m4Projection, m4View, TranslateMatrix(-5, -1, xMod, yMod));
	m_pMesh[30].Render(m4Projection, m4View, TranslateMatrix(-3, -1, xMod, yMod));
	m_pMesh[31].Render(m4Projection, m4View, TranslateMatrix(-2, -1, xMod, yMod));
	m_pMesh[32].Render(m4Projection, m4View, TranslateMatrix(-1, -1, xMod, yMod));
	m_pMesh[33].Render(m4Projection, m4View, TranslateMatrix(0, -1, xMod, yMod));
	m_pMesh[34].Render(m4Projection, m4View, TranslateMatrix(1, -1, xMod, yMod));
	m_pMesh[35].Render(m4Projection, m4View, TranslateMatrix(2, -1, xMod, yMod));
	m_pMesh[36].Render(m4Projection, m4View, TranslateMatrix(3, -1, xMod, yMod));
	m_pMesh[37].Render(m4Projection, m4View, TranslateMatrix(5, -1, xMod, yMod));
	m_pMesh[38].Render(m4Projection, m4View, TranslateMatrix(-5, -2, xMod, yMod));
	m_pMesh[39].Render(m4Projection, m4View, TranslateMatrix(-3, -2, xMod, yMod));
	m_pMesh[40].Render(m4Projection, m4View, TranslateMatrix(3, -2, xMod, yMod));
	m_pMesh[41].Render(m4Projection, m4View, TranslateMatrix(5, -2, xMod, yMod));
	m_pMesh[42].Render(m4Projection, m4View, TranslateMatrix(-2, -3, xMod, yMod));
	m_pMesh[43].Render(m4Projection, m4View, TranslateMatrix(-1, -3, xMod, yMod));
	m_pMesh[44].Render(m4Projection, m4View, TranslateMatrix(1, -3, xMod, yMod));
	m_pMesh[45].Render(m4Projection, m4View, TranslateMatrix(2, -3, xMod, yMod));

	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();
	
	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();
	
	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	if (m_pMesh != nullptr)
	{
		delete m_pMesh;
		m_pMesh = nullptr;
	}
	SafeDelete(m_pMesh1);
	//release GUI
	ShutdownGUI();
}
matrix4 Application::TranslateMatrix(int x,int y,float xMod,float yMod) {

	return glm::translate(IDENTITY_M4, vector3(x+xMod,y+yMod,0));

}