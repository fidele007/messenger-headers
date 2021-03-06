/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <FBSharedFramework/WKScriptMessageHandler.h>
#import <Messenger/FBNativeArticleWebViewProtocol.h>

@protocol FBNativeArticleWebViewDelegate;
@class WKWebView, NSString, UIScrollView, UIView, NSURL;

@interface FBNativeArticleWKWebView : NSObject <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, FBNativeArticleWebViewProtocol> {

	struct {
		unsigned shouldStartNavigationRequest : 1;
		unsigned didStartNavigationRequest : 1;
		unsigned didFailNavigationRequest : 1;
		unsigned didFinishNavigationRequest : 1;
		unsigned progressChanged : 1;
		unsigned didReceiveUserScriptMessage : 1;
	}  _delegateFlags;
	BOOL _isTrackingProgress;
	WKWebView* _webView;
	BOOL _readyToNavigate;
	/*^block*/id _pendingBlockToRunWhenReady;
	id<FBNativeArticleWebViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNativeArticleWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(id)initWithFrame:(CGRect)arg1 scalesPageToFit:(BOOL)arg2 suppressesIncrementalRendering:(BOOL)arg3 userScriptsOnDocumentLoad:(id)arg4 session:(id)arg5 ;
-(void)_toggleProgressTrackingIfNecessary;
-(void)_setReadyToNavigate;
-(void)_estimatedProgressChanged;
-(void)_runBlockWhenReadyToNavigate:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<FBNativeArticleWebViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNativeArticleWebViewDelegate>)delegate;
-(UIView *)view;
-(NSURL *)URL;
-(UIScrollView *)scrollView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

