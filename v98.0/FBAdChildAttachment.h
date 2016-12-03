/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBAdCreativePlaceData, FBAdCallToAction;

@interface FBAdChildAttachment : FBGraphQLInput {

	NSString* _link;
	NSString* _imageHash;
	NSString* _picture;
	NSString* _name;
	FBAdCreativePlaceData* _placeData;
	FBAdCallToAction* _callToAction;

}

@property (nonatomic,copy) NSString * link;                                //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * imageHash;                           //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * picture;                             //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) FBAdCreativePlaceData * placeData;              //@synthesize placeData=_placeData - In the implementation block
@property (nonatomic,copy) FBAdCallToAction * callToAction;                //@synthesize callToAction=_callToAction - In the implementation block
-(FBAdCallToAction *)callToAction;
-(void)setCallToAction:(FBAdCallToAction *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(FBAdCreativePlaceData *)placeData;
-(void)setPlaceData:(FBAdCreativePlaceData *)arg1 ;
-(NSString *)picture;
-(void)setPicture:(NSString *)arg1 ;
-(NSString *)imageHash;
@end
