/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBDateInput, FBAttachmentLifeEventExtraData;

@interface FBAttachmentLifeEventData : FBGraphQLInput {

	NSString* _icon;
	NSString* _source;
	NSString* _lifeEventType;
	FBDateInput* _startDate;
	FBAttachmentLifeEventExtraData* _extras;

}

@property (nonatomic,copy) NSString * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * lifeEventType;                             //@synthesize lifeEventType=_lifeEventType - In the implementation block
@property (nonatomic,copy) FBDateInput * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) FBAttachmentLifeEventExtraData * extras;              //@synthesize extras=_extras - In the implementation block
-(void)setExtras:(FBAttachmentLifeEventExtraData *)arg1 ;
-(FBAttachmentLifeEventExtraData *)extras;
-(void)setLifeEventType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)lifeEventType;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setIcon:(NSString *)arg1 ;
-(NSString *)icon;
-(void)setStartDate:(FBDateInput *)arg1 ;
-(FBDateInput *)startDate;
@end

