/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNContactShareCardActionButtonsContainerView, MNContactShareAttachmentViewModel, MNContactShareProfileInfoView;

@interface MNContactShareCardProfileInfoCell : UITableViewCell {

	MNContactShareCardActionButtonsContainerView* _contactShareCardActionButtonsContainerView;
	MNContactShareAttachmentViewModel* _contactShareAttachmentViewModel;
	MNContactShareProfileInfoView* _contactShareProfileInfoView;

}

@property (nonatomic,retain) MNContactShareCardActionButtonsContainerView * contactShareCardActionButtonsContainerView;              //@synthesize contactShareCardActionButtonsContainerView=_contactShareCardActionButtonsContainerView - In the implementation block
@property (nonatomic,copy) MNContactShareAttachmentViewModel * contactShareAttachmentViewModel;                                      //@synthesize contactShareAttachmentViewModel=_contactShareAttachmentViewModel - In the implementation block
@property (nonatomic,readonly) MNContactShareProfileInfoView * contactShareProfileInfoView;                                          //@synthesize contactShareProfileInfoView=_contactShareProfileInfoView - In the implementation block
-(MNContactShareProfileInfoView *)contactShareProfileInfoView;
-(MNContactShareAttachmentViewModel *)contactShareAttachmentViewModel;
-(void)setContactShareAttachmentViewModel:(MNContactShareAttachmentViewModel *)arg1 ;
-(id)_contactShareAttachmentViewModelForContactCard:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 useConnectionsContent:(BOOL)arg3 ;
-(MNContactShareCardActionButtonsContainerView *)contactShareCardActionButtonsContainerView;
-(void)setContactShareCardActionButtonsContainerView:(MNContactShareCardActionButtonsContainerView *)arg1 ;
-(void)layoutSubviews;
@end

