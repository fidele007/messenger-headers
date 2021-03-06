/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReceivedDataBufferProtocol.h>

@protocol FBReceivedDataBufferDelegate;
@class NSMutableData, NSString;

@interface FBReceivedDataMemoryBuffer : NSObject <FBReceivedDataBufferProtocol> {

	NSMutableData* _data;
	BOOL _opened;
	id<FBReceivedDataBufferDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReceivedDataBufferDelegate> delegate; 
-(void)setDelegate:(id<FBReceivedDataBufferDelegate>)arg1 ;
-(NSString *)description;
-(id<FBReceivedDataBufferDelegate>)delegate;
-(unsigned long long)length;
-(id)data;
-(void)close;
-(void)appendData:(id)arg1 ;
-(void)open;
@end

