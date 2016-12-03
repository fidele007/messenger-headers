/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadGenericSnippetsLoading.h>

@class MNAppMessageAttachmentUtils, NSString;

@interface MNThreadVideoSnippetLoader : NSObject <MNThreadGenericSnippetsLoading> {

	MNAppMessageAttachmentUtils* _messageAttachmentUtils;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadThreadSnippetForThreadSummary:(id)arg1 latestSnippetMessage:(id)arg2 userIdToUserMap:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)canGenerateSnippetForMessage:(id)arg1 ;
-(id)initWithAppMessageAttachmentUtils:(id)arg1 ;
@end

