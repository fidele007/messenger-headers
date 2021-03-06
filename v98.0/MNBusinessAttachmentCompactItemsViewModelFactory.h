/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNAttachmentStyleViewModelCreator.h>

@class FBUserSession, MNBusinessCTAFactory, NSString;

@interface MNBusinessAttachmentCompactItemsViewModelFactory : NSObject <FBViewerContextClassProvidable, MNAttachmentStyleViewModelCreator> {

	FBUserSession* _session;
	MNBusinessCTAFactory* _ctaFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewModelForAttachment:(id)arg1 message:(id)arg2 ;
-(id)viewModelForDemo;
-(id)initWithSession:(id)arg1 ctaFactory:(id)arg2 ;
@end

