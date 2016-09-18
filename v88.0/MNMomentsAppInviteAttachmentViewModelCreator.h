/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewModelCreator.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class NSMutableDictionary, NSString;

@interface MNMomentsAppInviteAttachmentViewModelCreator : NSObject <MNAttachmentStyleViewModelCreator, FBViewerContextClassProvidable> {

	NSMutableDictionary* _loggedModelsByID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_viewModelFromTargetActionLinks:(id)arg1 hasInstalledMoments:(BOOL)arg2 loggingData:(id)arg3 ;
+(id)_viewModelFromAttachmentActionLinks:(id)arg1 hasInstalledMoments:(BOOL)arg2 loggingData:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewModelForAttachment:(id)arg1 message:(id)arg2 ;
-(void)_logViewModelCreate:(id)arg1 ;
@end
