CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 454;
	title = 45402;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 101;
			elnk = 255;
			nextlnk = 254;
			prelnk = "100;";

			CDboTSActSToCEvt
			{
				apptype = 0;
				eitype = 6;
				esctype = 0;
				ectype = -1;
				etype = 1;
				taid = 1;
			}
		}
		CDboTSContGCond
		{
			cid = 4;
			prelnk = "3;";
			nolnk = 255;
			rm = 0;
			yeslnk = 100;

			CDboTSCheckSToCEvt
			{
				itype = 6;
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 3;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 45409;
				ctype = 1;
				idx = 4151201;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 45408;
				gtype = 2;
				area = 45401;
				goal = 45404;
				grade = 132203;
				rwd = 100;
				sort = 45405;
				stype = 2;
				taid = 1;
				title = 45402;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "101;";
			type = 1;
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 45407;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 4151201;
			}
			CDboTSCheckPCRace
			{
				raceflg = 4;
			}
			CDboTSCheckLvl
			{
				maxlvl = 18;
				minlvl = 10;
			}
			CDboTSCheckClrQst
			{
				and = "450;";
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 45408;
			gtype = 2;
			oklnk = 2;
			area = 45401;
			goal = 45404;
			sort = 45405;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 45402;
		}
		CDboTSContGAct
		{
			cid = 3;
			elnk = 255;
			nextlnk = 4;
			prelnk = "2;";

			CDboTSActSToCEvt
			{
				dt2 = 45435;
				otype2 = 1;
				widx1 = 1;
				iidx0 = -1;
				otype1 = 1;
				widx2 = 1;
				dt0 = 45433;
				esctype = 0;
				iidx1 = -1;
				it1 = 45431;
				otype0 = 1;
				tidx2 = 1651104;
				dt1 = 45434;
				etype = 0;
				iidx2 = -1;
				it0 = 45430;
				taid = 1;
				tidx1 = 1654108;
				widx0 = 1;
				apptype = 0;
				eitype = 6;
				tidx0 = 5312301;
				ectype = -1;
				it2 = 45432;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 45414;
			nextlnk = 101;
			rwdtbl = 45401;
			rwdtype = 0;
			ltime = -1;
			prelnk = "4;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 4151201;
			}
		}
	}
}
