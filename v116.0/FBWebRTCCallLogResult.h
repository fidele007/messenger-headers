/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface FBWebRTCCallLogResult : NSObject {

	id _value;
	NSError* _error;

}

@property (retain) id value;                      //@synthesize value=_value - In the implementation block
@property (retain) NSError * error;               //@synthesize error=_error - In the implementation block
@property (readonly) BOOL succeeded; 
+(id)successWithResult:(id)arg1 ;
+(id)error:(id)arg1 ;
+(id)success;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(BOOL)succeeded;
@end

