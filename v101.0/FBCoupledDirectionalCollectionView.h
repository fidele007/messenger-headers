/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionView.h>
#import <Messenger/FBCoupledDirectionalScrollViewInternal.h>
#import <Messenger/FBCoupledDirectionalScrollView.h>

@class FBCoupledDirectionalScrollHandler, UIPanGestureRecognizer, NSString;

@interface FBCoupledDirectionalCollectionView : UICollectionView <FBCoupledDirectionalScrollViewInternal, FBCoupledDirectionalScrollView> {

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
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
@end

