/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAudioRecorderDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSMutableData;

@interface FBAudioRecorder : NSObject {

	id<FBAudioRecorderDelegate> _delegate;
	SCD_Struct_FB1174* _recordState;
	NSMutableData* _data;

}

@property (assign,nonatomic) id<FBAudioRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB1174* recordState;                    //@synthesize recordState=_recordState - In the implementation block
@property (nonatomic,readonly) NSMutableData * data;                            //@synthesize data=_data - In the implementation block
-(SCD_Struct_FB1174*)recordState;
-(void)setRecordState:(SCD_Struct_FB1174*)arg1 ;
-(void)setDelegate:(id<FBAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAudioRecorderDelegate>)delegate;
-(NSMutableData *)data;
-(void)stopRecording;
-(BOOL)startRecording:(double)arg1 ;
@end

