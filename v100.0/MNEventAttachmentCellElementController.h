/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <Messenger/MNEventSegmentControlDelegate.h>
#import <Messenger/MNEventAttachmentViewDelegate.h>

@protocol FBIntentHandler;
@class FBUserSession, MNEventSegmentControl, NSString;

@interface MNEventAttachmentCellElementController : MNDefaultAttachmentCellElementController <MNEventSegmentControlDelegate, MNEventAttachmentViewDelegate> {

	FBUserSession* _session;
	MNEventSegmentControl* _segmentControl;
	id<FBIntentHandler> _intentHandler;
	NSString* _viewerGuestStatus;

}

@property (nonatomic,copy) NSString * viewerGuestStatus;              //@synthesize viewerGuestStatus=_viewerGuestStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 ;
-(void)_updateViewWithGuestStatusWithViewModel:(id)arg1 ;
-(void)setViewerGuestStatus:(NSString *)arg1 ;
-(NSString *)viewerGuestStatus;
-(void)didSelectRsvpStatus:(id)arg1 forEvent:(id)arg2 ;
-(void)didTapEvent:(id)arg1 ;
@end

