/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class FBScrollViewSwipeBasedDismissalManager, NSString;

@interface FBSwipeBasedDismissalScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	FBScrollViewSwipeBasedDismissalManager* _dismissalManager;
	id<UIScrollViewDelegate> _originalDelegate;

}

@property (assign,nonatomic,__weak) FBScrollViewSwipeBasedDismissalManager * dismissalManager;              //@synthesize dismissalManager=_dismissalManager - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> originalDelegate;                              //@synthesize originalDelegate=_originalDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScrollViewSwipeBasedDismissalManager *)dismissalManager;
-(void)setDismissalManager:(FBScrollViewSwipeBasedDismissalManager *)arg1 ;
-(id<UIScrollViewDelegate>)originalDelegate;
-(void)setOriginalDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
