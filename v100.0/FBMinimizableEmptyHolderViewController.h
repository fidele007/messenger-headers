/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMinimizableContentDelegate.h>

@class NSString, UIView;

@interface FBMinimizableEmptyHolderViewController : UIViewController <FBMinimizableContentDelegate> {

	BOOL _shouldUseMinimizableModalsAnimation;
	BOOL _isPresentedInMinimizedBrowser;
	double _loadingProgress;
	NSString* _minimizedTabTitle;
	UIView* _minimizedTabBrowserContentView;
	NSString* _restoreURLString;

}

@property (assign,nonatomic) BOOL shouldUseMinimizableModalsAnimation;              //@synthesize shouldUseMinimizableModalsAnimation=_shouldUseMinimizableModalsAnimation - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInMinimizedBrowser;                    //@synthesize isPresentedInMinimizedBrowser=_isPresentedInMinimizedBrowser - In the implementation block
@property (assign,nonatomic) double loadingProgress;                                //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,copy) NSString * minimizedTabTitle;                            //@synthesize minimizedTabTitle=_minimizedTabTitle - In the implementation block
@property (nonatomic,retain) UIView * minimizedTabBrowserContentView;               //@synthesize minimizedTabBrowserContentView=_minimizedTabBrowserContentView - In the implementation block
@property (nonatomic,copy) NSString * restoreURLString;                             //@synthesize restoreURLString=_restoreURLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMinimizedTabTitle:(NSString *)arg1 ;
-(BOOL)shouldUseMinimizableModalsAnimation;
-(void)setShouldUseMinimizableModalsAnimation:(BOOL)arg1 ;
-(NSString *)minimizedTabTitle;
-(UIView *)minimizedTabBrowserContentView;
-(BOOL)isPresentedInMinimizedBrowser;
-(void)setIsPresentedInMinimizedBrowser:(BOOL)arg1 ;
-(NSString *)restoreURLString;
-(void)setRestoreURLString:(NSString *)arg1 ;
-(void)setMinimizedTabBrowserContentView:(UIView *)arg1 ;
-(double)loadingProgress;
-(void)setLoadingProgress:(double)arg1 ;
@end

