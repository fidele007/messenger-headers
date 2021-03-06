/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQCameraConfigProtocol.h>

@class NSString;

@interface MQPureCameraConfig : NSObject <MQCameraConfigProtocol> {

	long long _width;
	long long _height;
	NSString* _sessionPreset;

}

@property (assign,nonatomic) long long width;                       //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSString * sessionPreset;              //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(void)setSessionPreset:(NSString *)arg1 ;
-(NSString *)sessionPreset;
@end

