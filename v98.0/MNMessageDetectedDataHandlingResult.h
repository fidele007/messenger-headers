/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNMessageDetectedDataHandlingResult : FBValueObject <NSCopying> {

	BOOL _isCanceled;
	NSError* _error;

}

@property (nonatomic,readonly) BOOL isCanceled;                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithIsCanceled:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)isCanceled;
-(NSError *)error;
@end
