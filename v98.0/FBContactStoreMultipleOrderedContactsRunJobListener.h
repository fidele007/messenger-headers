/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContactStoreMultipleOrderedContactsRunJobListening.h>

@class NSString;

@interface FBContactStoreMultipleOrderedContactsRunJobListener : NSObject <FBContactStoreMultipleOrderedContactsRunJobListening> {

	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactStoreRunJobDidCompleteWithMultipleOrderedContacts:(id)arg1 ;
-(void)contactStoreRunJobDidFail;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
@end

