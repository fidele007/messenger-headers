/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNGroupsRoomCreateView;

@interface MNGroupsRoomContainerView : UIView {

	BOOL _isShowingCustmizationOptions;
	MNGroupsRoomCreateView* _roomCreateView;
	MNGroupsRoomCreateView* _roomCustomizeView;

}

@property (nonatomic,readonly) BOOL isShowingCustmizationOptions;                       //@synthesize isShowingCustmizationOptions=_isShowingCustmizationOptions - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomCreateView * roomCreateView;                 //@synthesize roomCreateView=_roomCreateView - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomCreateView * roomCustomizeView;              //@synthesize roomCustomizeView=_roomCustomizeView - In the implementation block
-(void)_willAnimateToCustomizationView;
-(void)_didAnimateToCustomizationView;
-(void)prepareViewsForPresentation;
-(void)showCustomizationOptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)resetViews;
-(BOOL)isShowingCustmizationOptions;
-(MNGroupsRoomCreateView *)roomCreateView;
-(MNGroupsRoomCreateView *)roomCustomizeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
