/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, NSArray;

@interface FBSportsMatchesQueryData : FBGraphQLInput {

	NSNumber* _timestamp;
	NSArray* _teamIds;
	NSArray* _leagueIds;

}

@property (nonatomic,copy) NSNumber * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * teamIds;                 //@synthesize teamIds=_teamIds - In the implementation block
@property (nonatomic,copy) NSArray * leagueIds;               //@synthesize leagueIds=_leagueIds - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)teamIds;
-(void)setTeamIds:(NSArray *)arg1 ;
-(NSArray *)leagueIds;
-(void)setLeagueIds:(NSArray *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
@end

