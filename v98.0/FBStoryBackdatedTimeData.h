/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBStoryBackdatedTimeData : FBGraphQLInput {

	NSNumber* _time;
	NSString* _granularity;

}

@property (nonatomic,copy) NSNumber * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * granularity;              //@synthesize granularity=_granularity - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTime:(NSNumber *)arg1 ;
-(NSNumber *)time;
-(NSString *)granularity;
-(void)setGranularity:(NSString *)arg1 ;
@end

