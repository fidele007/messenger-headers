/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNModelSubscriptionUpdate : NSObject <NSCopying> {

	long long _subtype;
	id _loaded_model;
	NSError* _error;
	long long _longOperationStatus;

}
+(id)loadedWithModel:(id)arg1 ;
+(id)longOperationStatus:(long long)arg1 ;
+(id)error:(id)arg1 ;
-(void)matchLoaded:(/*^block*/id)arg1 error:(/*^block*/id)arg2 longOperationStatus:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

