/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, FBStoryBackdatedTimeData;

@interface FBStoryPastTimeData : FBGraphQLInput {

	NSNumber* _timeSinceOriginalPost;
	FBStoryBackdatedTimeData* _backdatedTime;

}

@property (nonatomic,copy) NSNumber * timeSinceOriginalPost;                      //@synthesize timeSinceOriginalPost=_timeSinceOriginalPost - In the implementation block
@property (nonatomic,copy) FBStoryBackdatedTimeData * backdatedTime;              //@synthesize backdatedTime=_backdatedTime - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)timeSinceOriginalPost;
-(void)setTimeSinceOriginalPost:(NSNumber *)arg1 ;
-(FBStoryBackdatedTimeData *)backdatedTime;
-(void)setBackdatedTime:(FBStoryBackdatedTimeData *)arg1 ;
@end
