/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFDecompressionSessionDelegate <NSObject>
@required
-(void)yieldDecompressedBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_FB25)arg2 presentationDuration:(SCD_Struct_FB25)arg3 iFrame:(unsigned long long)arg4;
-(void)handleDecompressionSessionError:(id)arg1;
-(void)handleDecompressionSessionError:(id)arg1 ifIFrameStillValid:(unsigned long long)arg2;

@end
