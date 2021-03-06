/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBCrowdsourcingRegionReportIncorrectData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _regionId;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _accuracyMeters;
	NSNumber* _ageSeconds;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * regionId;                      //@synthesize regionId=_regionId - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * accuracyMeters;                //@synthesize accuracyMeters=_accuracyMeters - In the implementation block
@property (nonatomic,copy) NSNumber * ageSeconds;                    //@synthesize ageSeconds=_ageSeconds - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setAccuracyMeters:(NSNumber *)arg1 ;
-(NSNumber *)accuracyMeters;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)regionId;
-(void)setRegionId:(NSString *)arg1 ;
-(NSNumber *)ageSeconds;
-(void)setAgeSeconds:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end

