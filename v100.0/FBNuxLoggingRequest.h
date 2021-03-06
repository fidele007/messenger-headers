/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString, NSDictionary;

@interface FBNuxLoggingRequest : FBNetworkerRequest {

	NSString* _nuxID;
	NSString* _loggingEvent;
	NSDictionary* _extraData;

}
-(id)networkRequest;
-(id)_extraDataPayload;
-(id)initWithNuxID:(id)arg1 loggingEvent:(id)arg2 extraData:(id)arg3 callbackPerformer:(id)arg4 ;
@end

