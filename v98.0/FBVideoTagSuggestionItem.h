/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson, FBMemFaceBox, NSString;

@interface FBVideoTagSuggestionItem : FBValueObject <NSCopying> {

	float _blurMeasure;
	FBMemPerson* _person;
	FBMemFaceBox* _faceBox;
	NSString* _videoAssetID;
	SCD_Struct_FB25 _time;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;                 //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) FBMemFaceBox * faceBox;               //@synthesize faceBox=_faceBox - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoAssetID;              //@synthesize videoAssetID=_videoAssetID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 time;                      //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) float blurMeasure;                         //@synthesize blurMeasure=_blurMeasure - In the implementation block
-(FBMemFaceBox *)faceBox;
-(NSString *)videoAssetID;
-(id)initWithPerson:(id)arg1 faceBox:(id)arg2 videoAssetID:(id)arg3 time:(SCD_Struct_FB25)arg4 blurMeasure:(float)arg5 ;
-(float)blurMeasure;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_FB25)time;
-(FBMemPerson *)person;
@end

