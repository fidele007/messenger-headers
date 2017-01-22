/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBProfServicesBookingDataModel, MNPSBookingSharedNotesView, MNPSBookingSharedHeaderView, NSArray;

@interface MNPSBookingXMANotesAvailabilityView : UIView {

	FBProfServicesBookingDataModel* _viewModel;
	MNPSBookingSharedNotesView* _topNotesView;
	MNPSBookingSharedNotesView* _bottomNotesView;
	MNPSBookingSharedHeaderView* _headerView;
	NSArray* _ctaViews;
	BOOL _actsAsAdmin;

}
+(CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2 actsAsAdmin:(BOOL)arg3 ;
-(id)initWithViewModel:(id)arg1 actsAsAdmin:(BOOL)arg2 delegate:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
