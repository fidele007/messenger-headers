/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNContactShareAttachmentTextView, UIImageView, MNProfileImageView, MNContactShareAttachmentViewModel;

@interface MNContactShareProfileInfoView : UIView {

	MNContactShareAttachmentTextView* _contactTextView;
	UIImageView* _threadImageMaskView;
	MNProfileImageView* _contactProfileImageView;
	MNContactShareAttachmentViewModel* _contactShareAttachmentViewModel;

}

@property (nonatomic,retain) UIImageView * threadImageMaskView;                                              //@synthesize threadImageMaskView=_threadImageMaskView - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * contactProfileImageView;                                 //@synthesize contactProfileImageView=_contactProfileImageView - In the implementation block
@property (nonatomic,copy) MNContactShareAttachmentViewModel * contactShareAttachmentViewModel;              //@synthesize contactShareAttachmentViewModel=_contactShareAttachmentViewModel - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withContactShareAttachmentViewModel:(id)arg2 ;
+(double)textViewHeightFits:(CGSize)arg1 contactShareAttachmentViewModel:(id)arg2 ;
-(MNProfileImageView *)contactProfileImageView;
-(UIImageView *)threadImageMaskView;
-(MNContactShareAttachmentViewModel *)contactShareAttachmentViewModel;
-(void)setContactShareAttachmentViewModel:(MNContactShareAttachmentViewModel *)arg1 ;
-(void)setThreadImageMaskView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
