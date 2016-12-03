/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSError;

@interface FBSymmetricEncryptionResult : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSData* _success_result;
	NSData* _success_mac;
	NSError* _error_error;

}
+(id)errorWithError:(id)arg1 ;
+(id)successWithResult:(id)arg1 mac:(id)arg2 ;
-(void)matchSuccess:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

