/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureThreadListResponse, NSError;

@interface MNHandlerSecureThreadListResponse : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNSecureThreadListResponse* _handled_response;
	MNSecureThreadListResponse* _partial_response;
	NSError* _error;

}
+(id)handledWithResponse:(id)arg1 ;
+(id)partialWithResponse:(id)arg1 ;
+(id)error:(id)arg1 ;
-(void)matchHandled:(/*^block*/id)arg1 partial:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

