/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZZArchiveEntryWriter
@required
-(unsigned)offsetToLocalFileEnd;
-(BOOL)writeLocalFileToChannelOutput:(id)arg1 withInitialSkip:(unsigned)arg2 error:(out id*)arg3;
-(BOOL)writeCentralFileHeaderToChannelOutput:(id)arg1 error:(out id*)arg2;

@end

