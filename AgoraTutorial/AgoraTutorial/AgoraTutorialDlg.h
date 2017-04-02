
// AgoraTutorialDlg.h : ͷ�ļ�
//

#pragma once
#include "afxmenubutton.h"
#include "AgoraObject.h"
#include "afxwin.h"


// CAgoraTutorialDlg �Ի���
class CAgoraTutorialDlg : public CDialog
{
// ����
public:
	CAgoraTutorialDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_AGORATUTORIAL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	afx_msg void OnBnClickedBtnjoin();
	afx_msg void OnBnClickedBtnleave();
	afx_msg void OnBnClickedBtndisvid();
	afx_msg void OnBnClickedBtnmutelocaud();

	// ENGINE EVENT MESSAGE
	afx_msg LRESULT OnFirstRemoteVideoDecoded(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()

private:
	CString			m_strChannelName;

	CAgoraObject	*m_lpAgoraObject;

	CStatic		m_wndRemote;
	CStatic		m_wndLocal;
};
