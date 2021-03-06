/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Messenger/FBCoupledDirectionalScrollViewInternal.h>
#import <Messenger/FBCoupledDirectionalScrollView.h>

@class FBCoupledDirectionalScrollHandler, NSString, UIPanGestureRecognizer;

@interface FBCoupledDirectionalScrollView : UIScrollView <FBCoupledDirectionalScrollViewInternal, FBCoupledDirectionalScrollView> {

	int _direction;
	FBCoupledDirectionalScrollHandler* _scrollHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int direction;                                                    //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) FBCoupledDirectionalScrollHandler * scrollHandler;              //@synthesize scrollHandler=_scrollHandler - In the implementation block
-(FBCoupledDirectionalScrollHandler *)scrollHandler;
-(void)decoupleFromView:(id)arg1 ;
-(void)coupleWithView:(id)arg1 ;
-(void)decoupleFromAllViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
@end

