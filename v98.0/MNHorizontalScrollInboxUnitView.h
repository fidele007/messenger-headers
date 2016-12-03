/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontagePreviewing.h>
#import <Messenger/MNProfilePreviewing.h>

@class UIView, MNHorizontalScrollInboxUnitViewModel, NSString;

@interface MNHorizontalScrollInboxUnitView : UIView <MNMontagePreviewing, MNProfilePreviewing> {

	UIView* _topView;
	UIView* _bottomView;
	MNHorizontalScrollInboxUnitViewModel* _horizontalScrollViewModel;

}

@property (nonatomic,readonly) UIView * bottomView;                                                       //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,copy) MNHorizontalScrollInboxUnitViewModel * horizontalScrollViewModel;              //@synthesize horizontalScrollViewModel=_horizontalScrollViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setHorizontalScrollViewModel:(MNHorizontalScrollInboxUnitViewModel *)arg1 ;
-(MNHorizontalScrollInboxUnitViewModel *)horizontalScrollViewModel;
-(id)previewableMontageAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)initWithTopView:(id)arg1 bottomView:(id)arg2 ;
-(id)_collectionView:(id)arg1 cellAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)layoutSubviews;
-(UIView *)bottomView;
@end

