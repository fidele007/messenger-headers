/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeArticleLoadingStateHandlerDelegate <NSObject>
@required
-(void)loadingStateHandler:(id)arg1 setLoadingProgressVisible:(BOOL)arg2 animated:(BOOL)arg3;
-(void)loadingStateHandlerSetLoadingProgressComplete:(id)arg1;
-(void)loadingStateHandler:(id)arg1 setRetryViewVisible:(BOOL)arg2 animated:(BOOL)arg3;
-(void)loadingStateHandler:(id)arg1 setLoadingProgress:(double)arg2 animated:(BOOL)arg3;
-(void)loadingStateHandlerResetLoadingProgress:(id)arg1;

@end

