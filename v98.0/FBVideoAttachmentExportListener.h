/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoAttachmentExportListener <NSObject>
@required
-(void)videoAttachmentDidStartExport:(id)arg1;
-(void)videoAttachment:(id)arg1 didExportWithProgress:(float)arg2;
-(void)videoAttachment:(id)arg1 didFailExportWithError:(id)arg2;
-(void)videoAttachmentDidFinishExport:(id)arg1;

@end

