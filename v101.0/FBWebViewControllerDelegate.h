/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewControllerDelegate <UIScrollViewDelegate>
@optional
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2;
-(void)webViewController:(id)arg1 webViewNavigationHistoryChangedCanGoBack:(BOOL)arg2 canGoForward:(BOOL)arg3;
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2;
-(void)webViewController:(id)arg1 didUpdateProgress:(double)arg2;
-(void)webViewController:(id)arg1 playingMediaChanged:(BOOL)arg2;
-(void)webViewController:(id)arg1 didLoadHostString:(id)arg2 didLoadScheme:(id)arg3;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3;
-(void)webViewController:(id)arg1 didStartLoadURL:(id)arg2;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2 withError:(id)arg3;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2;
-(void)webViewControllerWillPushNavigationState:(id)arg1;
-(void)webViewControllerWillPopNavigationState:(id)arg1;
-(void)webViewController:(id)arg1 handleNativeURL:(id)arg2;
-(void)webViewController:(id)arg1 userCanceledLoadURL:(id)arg2;
-(void)webViewControllerHistoryChanged:(id)arg1;
-(void)webViewController:(id)arg1 currentRequestPrefetchedChangedTo:(BOOL)arg2;
-(void)webViewControllerSelectionChanged:(id)arg1;
-(void)webViewControllerWebContentProcessDidTerminate:(id)arg1;
-(void)webViewBlockingResourceLoaded:(id)arg1;
-(void)webViewController:(id)arg1 favoriteItemTappedWithURL:(id)arg2 selected:(BOOL)arg3;

@end
