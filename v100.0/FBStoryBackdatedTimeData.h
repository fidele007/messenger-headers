/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
