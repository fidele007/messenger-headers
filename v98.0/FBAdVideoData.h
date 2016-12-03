/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString, FBAdCallToAction;

@interface FBAdVideoData : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _imageHash;
	NSString* _imageURLString;
	NSString* _videoId;
	NSString* _descriptionText;
	FBAdCallToAction* _callToAction;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * imageHash;                             //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                        //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy) NSString * videoId;                               //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBAdCallToAction * callToAction;                  //@synthesize callToAction=_callToAction - In the implementation block
-(FBAdCallToAction *)callToAction;
-(NSString *)videoId;
-(NSString *)imageURLString;
-(void)setImageURLString:(NSString *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(void)setCallToAction:(FBAdCallToAction *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)imageHash;
@end

