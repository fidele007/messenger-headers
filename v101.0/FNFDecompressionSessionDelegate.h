/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFDecompressionSessionDelegate <NSObject>
@required
-(void)yieldDecompressedBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_FB33)arg2 presentationDuration:(SCD_Struct_FB33)arg3 iFrame:(unsigned long long)arg4;
-(void)handleDecompressionSessionError:(id)arg1;
-(void)handleDecompressionSessionError:(id)arg1 ifIFrameStillValid:(unsigned long long)arg2;

@end

