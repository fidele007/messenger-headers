/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBVideoTagFaceAnalysisData : FBValueObject <NSCopying> {

	double _analysisDuration;
	double _detectionFramesPerSecond;
	double _extractionFramesPerSecond;
	SCD_Struct_FB20 _videoLength;
	SCD_Struct_FB20 _faceFrameTimestamp;

}

@property (nonatomic,readonly) SCD_Struct_FB20 videoLength;                     //@synthesize videoLength=_videoLength - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB20 faceFrameTimestamp;              //@synthesize faceFrameTimestamp=_faceFrameTimestamp - In the implementation block
@property (nonatomic,readonly) double analysisDuration;                         //@synthesize analysisDuration=_analysisDuration - In the implementation block
@property (nonatomic,readonly) double detectionFramesPerSecond;                 //@synthesize detectionFramesPerSecond=_detectionFramesPerSecond - In the implementation block
@property (nonatomic,readonly) double extractionFramesPerSecond;                //@synthesize extractionFramesPerSecond=_extractionFramesPerSecond - In the implementation block
-(id)initWithVideoLength:(SCD_Struct_FB20)arg1 faceFrameTimestamp:(SCD_Struct_FB20)arg2 analysisDuration:(double)arg3 detectionFramesPerSecond:(double)arg4 extractionFramesPerSecond:(double)arg5 ;
-(SCD_Struct_FB20)faceFrameTimestamp;
-(double)analysisDuration;
-(double)detectionFramesPerSecond;
-(double)extractionFramesPerSecond;
-(SCD_Struct_FB20)videoLength;
@end
