/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBAttachmentPollData : FBGraphQLInput {

	NSString* _pollType;
	NSString* _pollAnswersState;
	NSArray* _options;

}

@property (nonatomic,copy) NSString * pollType;                      //@synthesize pollType=_pollType - In the implementation block
@property (nonatomic,copy) NSString * pollAnswersState;              //@synthesize pollAnswersState=_pollAnswersState - In the implementation block
@property (nonatomic,copy) NSArray * options;                        //@synthesize options=_options - In the implementation block
-(void)setPollAnswersState:(NSString *)arg1 ;
-(void)setPollType:(NSString *)arg1 ;
-(NSString *)pollAnswersState;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)pollType;
-(void)setOptions:(NSArray *)arg1 ;
-(NSArray *)options;
@end

